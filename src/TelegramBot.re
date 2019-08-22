type creationOptions =
  | Option({. polling: bool});

type onEvent = (string, unit) => unit;

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

type telegramBot = {
  on: onEvent,
  startPolling: startPollingOptions => Js.Promise.t(unit),
  stopPolling: stopPollingOptions => Js.Promise.t(unit),
};

[@bs.new] [@bs.module]
external createBot: (string, creationOptions) => telegramBot =
  "node-telegram-bot-api";

let create = (token: string, options: creationOptions): telegramBot => {
  let bot = createBot(token, options);
  bot;
};
