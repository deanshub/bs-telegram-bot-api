[@bs.deriving abstract]
type t = {
  [@bs.optional]
  polling: Js.Nullable.t(bool),
  [@bs.optional]
  webHook: Js.Nullable.t(bool),
};
