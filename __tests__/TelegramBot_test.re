open Jest;
open Expect;
open! Expect.Operators;

describe("TelegramBot", () =>
  test("instanciate a new bot", () => {
    let bot = TelegramBotOptions.t() |> TelegramBot.create(~token="TOKEN");
    TelegramBot.onMessage(bot, message => Js.log(message));
    expect(Js.typeof(bot)) |> toBe("object");
  })
);
