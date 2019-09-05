type t;
type listener('a) = 'a => unit;

let create: (~token: string, TelegramBotOptions.t) => t;
let onMessage: (t, listener('a)) => unit;
