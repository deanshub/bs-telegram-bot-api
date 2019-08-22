open Jest;
open Expect;
open! Expect.Operators;

describe("TelegramBot", () =>
  test("instanciate a new bot", () => {
    let bot = TelegramBot.create("TOKEN");
    expect(Js.typeof(bot) !== "undefined");
  })
);
