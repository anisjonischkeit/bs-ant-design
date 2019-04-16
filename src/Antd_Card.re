[%bs.raw {|require("antd/lib/card/style")|}];

[@bs.module] external reactClass: ReasonReact.reactClass = "antd/lib/card";

type tab = {
  .
  "key": string,
  "tab": string,
};

[@bs.obj]
external makeProps:
  (
    ~actions: array(ReasonReact.reactElement)=?,
    ~activeTabKey: string=?,
    ~headStyle: ReactDOMRe.Style.t=?,
    ~bodyStyle: ReactDOMRe.Style.t=?,
    ~bordered: bool=?,
    ~cover: ReasonReact.reactElement=?,
    ~defaultActiveTabKey: string=?,
    ~extra: ReasonReact.reactElement=?,
    ~hoverable: bool=?,
    ~loading: bool=?,
    ~tabList: array(tab)=?,
    ~title: ReasonReact.reactElement=?,
    ~_type: string=?,
    ~onTabChange: string => unit=?,
    ~id: string=?,
    ~className: string=?,
    ~style: ReactDOMRe.Style.t=?,
    unit
  ) =>
  _ =
  "";

let make =
    (
      ~actions=?,
      ~activeTabKey=?,
      ~headStyle=?,
      ~bodyStyle=?,
      ~bordered=?,
      ~cover=?,
      ~defaultActiveTabKey=?,
      ~extra=?,
      ~hoverable=?,
      ~loading=?,
      ~tabList=?,
      ~title=?,
      ~_type=?,
      ~onTabChange=?,
      ~id=?,
      ~className=?,
      ~style=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass,
    ~props=
      makeProps(
        ~actions=?Js.Option.map((. b) => Array.of_list(b), actions),
        ~activeTabKey?,
        ~headStyle?,
        ~bodyStyle?,
        ~bordered?,
        ~cover?,
        ~defaultActiveTabKey?,
        ~extra?,
        ~hoverable?,
        ~loading?,
        ~tabList=?Js.Option.map((. b) => Array.of_list(b), tabList),
        ~title?,
        ~_type?,
        ~onTabChange?,
        ~id?,
        ~className?,
        ~style?,
        (),
      ),
    children,
  );

module Grid = {
  [@bs.module "antd/lib/card"]
  external reactClass: ReasonReact.reactClass = "Grid";
  [@bs.obj]
  external makeProps:
    (~className: string=?, ~style: ReactDOMRe.Style.t=?, unit) => _ =
    "";
  let make = (~className=?, ~style=?, children) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=makeProps(~className?, ~style?, ()),
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
          "children": 'children,
        },
      ) =>
      make(
        ~style=?reactProps##style,
        ~className=?reactProps##className,
        reactProps##children,
      )
    );
  [@bs.obj]
  external makeProps:
    (~children: 'children, ~className: 'className=?, ~style: 'style=?, unit) =>
    {
      .
      "style": option('style),
      "className": option('className),
      "children": 'children,
    } =
    "";
};

module Meta = {
  [@bs.module "antd/lib/card"]
  external reactClass: ReasonReact.reactClass = "Meta";
  [@bs.obj]
  external makeProps:
    (
      ~avatar: ReasonReact.reactElement=?,
      ~className: string=?,
      ~description: ReasonReact.reactElement=?,
      ~style: ReactDOMRe.style=?,
      ~title: ReasonReact.reactElement=?,
      unit
    ) =>
    _ =
    "";
  let make =
      (~avatar=?, ~className=?, ~description=?, ~style=?, ~title=?, children) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        makeProps(~avatar?, ~className?, ~description?, ~style?, ~title?, ()),
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
          "title": option('title),
          "style": option('style),
          "description": option('description),
          "className": option('className),
          "avatar": option('avatar),
          "children": 'children,
        },
      ) =>
      make(
        ~title=?reactProps##title,
        ~style=?reactProps##style,
        ~description=?reactProps##description,
        ~className=?reactProps##className,
        ~avatar=?reactProps##avatar,
        reactProps##children,
      )
    );
  [@bs.obj]
  external makeProps:
    (
      ~children: 'children,
      ~avatar: 'avatar=?,
      ~className: 'className=?,
      ~description: 'description=?,
      ~style: 'style=?,
      ~title: 'title=?,
      unit
    ) =>
    {
      .
      "title": option('title),
      "style": option('style),
      "description": option('description),
      "className": option('className),
      "avatar": option('avatar),
      "children": 'children,
    } =
    "";
};
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
        "onTabChange": option('onTabChange),
        "_type": option('T_type),
        "title": option('title),
        "tabList": option('tabList),
        "loading": option('loading),
        "hoverable": option('hoverable),
        "extra": option('extra),
        "defaultActiveTabKey": option('defaultActiveTabKey),
        "cover": option('cover),
        "bordered": option('bordered),
        "bodyStyle": option('bodyStyle),
        "headStyle": option('headStyle),
        "activeTabKey": option('activeTabKey),
        "actions": option('actions),
        "children": 'children,
      },
    ) =>
    make(
      ~style=?reactProps##style,
      ~className=?reactProps##className,
      ~id=?reactProps##id,
      ~onTabChange=?reactProps##onTabChange,
      ~_type=?reactProps##_type,
      ~title=?reactProps##title,
      ~tabList=?reactProps##tabList,
      ~loading=?reactProps##loading,
      ~hoverable=?reactProps##hoverable,
      ~extra=?reactProps##extra,
      ~defaultActiveTabKey=?reactProps##defaultActiveTabKey,
      ~cover=?reactProps##cover,
      ~bordered=?reactProps##bordered,
      ~bodyStyle=?reactProps##bodyStyle,
      ~headStyle=?reactProps##headStyle,
      ~activeTabKey=?reactProps##activeTabKey,
      ~actions=?reactProps##actions,
      reactProps##children,
    )
  );
[@bs.obj]
external makeProps:
  (
    ~children: 'children,
    ~actions: 'actions=?,
    ~activeTabKey: 'activeTabKey=?,
    ~headStyle: 'headStyle=?,
    ~bodyStyle: 'bodyStyle=?,
    ~bordered: 'bordered=?,
    ~cover: 'cover=?,
    ~defaultActiveTabKey: 'defaultActiveTabKey=?,
    ~extra: 'extra=?,
    ~hoverable: 'hoverable=?,
    ~loading: 'loading=?,
    ~tabList: 'tabList=?,
    ~title: 'title=?,
    ~_type: 'T_type=?,
    ~onTabChange: 'onTabChange=?,
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
    "onTabChange": option('onTabChange),
    "_type": option('T_type),
    "title": option('title),
    "tabList": option('tabList),
    "loading": option('loading),
    "hoverable": option('hoverable),
    "extra": option('extra),
    "defaultActiveTabKey": option('defaultActiveTabKey),
    "cover": option('cover),
    "bordered": option('bordered),
    "bodyStyle": option('bodyStyle),
    "headStyle": option('headStyle),
    "activeTabKey": option('activeTabKey),
    "actions": option('actions),
    "children": 'children,
  } =
  "";

/*
 actions	The action list, shows at the bottom of the Card.	Array	-
 activeTabKey	Current TabPane's key	string	-
 headStyle	Inline style to apply to the card head	object	-
 bodyStyle	Inline style to apply to the card content	object	-
 bordered	Toggles rendering of the border around the card	boolean	true
 cover	Card cover	ReactNode	-
 defaultActiveTabKey	Initial active TabPane's key, if activeTabKey is not set.	string	-
 extra	Content to render in the top-right corner of the card	string|ReactNode	-
 hoverable	Lift up when hovering card	boolean	false
 loading	Shows a loading indicator while the contents of the card are being fetched	boolean	false
 tabList	List of TabPane's head.	Array<{key: string, tab: ReactNode}>	-
 title	Card title	string|ReactNode	-
 type	Card style type, can be set to inner or not set	string	-
 onTabChange	Callback when tab is switched	(key) => void	-
 */

/*
 avatar	avatar or icon	ReactNode	-
 className	className of container	string	-
 description	description content	ReactNode	-
 style	style object of container	object	-
 title	title content	ReactNode
 */
