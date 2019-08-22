open Jest;
open Expect;
open Expect.Operators;

describe("TelegramBot", () =>
  test("instanciate a new bot", () =>
    expect(1 + 1) |> toBe(2)
  )
);
