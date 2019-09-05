type t;

type listener('a) = 'a => unit;

type onEvent('a) = (string, listener('a)) => unit;

type startPollingOptions =
  | Option({. restart: bool});
type stopPollingOptions =
  | Option(
      {
        .
        cancel: bool,
        reason: string,
      },
    );

[@bs.new] [@bs.module]
external createBot: (string, TelegramBotOptions.t) => t =
  "node-telegram-bot-api";

[@bs.send] external on: (t, string, listener('a)) => unit = "on";

let onMessage = (bot: t, event: listener('a)): unit =>
  on(bot, "message", event);

let create = (~token: string, options): t => createBot(token, options);

type options = {
  polling: option(bool),
  webHook: option(bool),
};
