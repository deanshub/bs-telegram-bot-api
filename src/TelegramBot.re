type options =
  | None
  | Some({. polling: bool});

type t;

[@bs.new] [@bs.module]
external createBot: (string, options) => t = "node-telegram-bot-api";

let create = (token: string, options: options) => {
  let bot = createBot(token, options);
  bot;
};
