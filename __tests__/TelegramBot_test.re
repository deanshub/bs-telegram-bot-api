open Jest;
open Expect;
open Expect.Operators;

describe("TelegramBot", () =>
  test("instanciate a new bot", () =>
    expect(TelegramBot.createBot("TOKEN")) |> not_ |> toBe(Js.undefined)
  )
);
