[@bs.module] external reactClass: ReasonReact.reactClass = "antd/lib/badge";

[%bs.raw {|require("antd/lib/badge/style")|}];

[@bs.deriving jsConverter]
type status = [ | `success | `processing | `default | `error | `warning];

[@bs.obj]
external makeProps:
  (
    ~count: int=?,
    ~dot: bool=?,
    ~offset: (int, int)=?,
    ~overflowCount: int=?,
    ~showZero: bool=?,
    ~status: string=?,
    ~text: string=?,
    ~title: string=?,
    ~id: string=?,
    ~className: string=?,
    ~style: ReactDOMRe.Style.t=?,
    unit
  ) =>
  _ =
  "";

let make =
    (
      ~count=?,
      ~dot=?,
      ~offset=?,
      ~overflowCount=?,
      ~showZero=?,
      ~status=?,
      ~text=?,
      ~title=?,
      ~id=?,
      ~className=?,
      ~style=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass,
    ~props=
      makeProps(
        ~count?,
        ~dot?,
        ~offset?,
        ~overflowCount?,
        ~showZero?,
        ~status=?Js.Option.map((. b) => statusToJs(b), status),
        ~text?,
        ~title?,
        ~id?,
        ~className?,
        ~style?,
        (),
      ),
    children,
  );
/**
 * This is a wrapper created to let this component be used from the new React api.
 * Please convert this component to a [@react.component] function and then remove this wrapping code.
 */
let make =
  ReasonReactCompat.wrapReasonReactForReact(
    ~component=ReasonReact.statelessComponent("TemporaryRefactorComponent"),
    (
      reactProps: {
        .
        "style": option('style),
        "className": option('className),
        "id": option('id),
        "title": option('title),
        "text": option('text),
        "status": option('status),
        "showZero": option('showZero),
        "overflowCount": option('overflowCount),
        "offset": option('offset),
        "dot": option('dot),
        "count": option('count),
        "children": 'children,
      },
    ) =>
    make(
      ~style=?reactProps##style,
      ~className=?reactProps##className,
      ~id=?reactProps##id,
      ~title=?reactProps##title,
      ~text=?reactProps##text,
      ~status=?reactProps##status,
      ~showZero=?reactProps##showZero,
      ~overflowCount=?reactProps##overflowCount,
      ~offset=?reactProps##offset,
      ~dot=?reactProps##dot,
      ~count=?reactProps##count,
      reactProps##children,
    )
  );
[@bs.obj]
external makeProps:
  (
    ~children: 'children,
    ~count: 'count=?,
    ~dot: 'dot=?,
    ~offset: 'offset=?,
    ~overflowCount: 'overflowCount=?,
    ~showZero: 'showZero=?,
    ~status: 'status=?,
    ~text: 'text=?,
    ~title: 'title=?,
    ~id: 'id=?,
    ~className: 'className=?,
    ~style: 'style=?,
    unit
  ) =>
  {
    .
    "style": option('style),
    "className": option('className),
    "id": option('id),
    "title": option('title),
    "text": option('text),
    "status": option('status),
    "showZero": option('showZero),
    "overflowCount": option('overflowCount),
    "offset": option('offset),
    "dot": option('dot),
    "count": option('count),
    "children": 'children,
  } =
  "";

/*
 count	Number to show in badge	number|ReactNode
 dot	Whether to display a red dot instead of count	boolean	false
 offset	set offset of the badge dot, like[x, y]	[number, number]	-
 overflowCount	Max count to show	number	99
 showZero	Whether to show badge when count is zero	boolean	false
 status	Set Badge as a status dot	success | processing | default | error | warning	''
 text	If status is set, text sets the display text of the status dot	string	''
 title	Text to show when hovering over the badge	string	count
  */
