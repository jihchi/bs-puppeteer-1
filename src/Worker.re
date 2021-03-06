type t;

include Evaluator.Impl({
  type nonrec t = t;
});

[@bs.send]
external executionContext: t => Js.Promise.t(ExecutionContext.t) = "";

[@bs.send] external url: t => string = "";
