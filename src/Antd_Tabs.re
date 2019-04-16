[@bs.module] external reactClass: ReasonReact.reactClass = "antd/lib/tabs";

[%bs.raw {|require("antd/lib/tabs/style")|}];

[@bs.obj]
external makeProps:
  (
    ~defaultActiveKey: string=?,
    ~onChange: string => unit=?,
    ~id: string=?,
    ~className: string=?,
    ~style: ReactDOMRe.Style.t=?,
    unit
  ) =>
  _ =
  "";

let make =
    (
      ~defaultActiveKey=?,
      ~onChange=?,
      ~id=?,
      ~className=?,
      ~style=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass,
    ~props=
      makeProps(
        ~defaultActiveKey?,
        ~onChange?,
        ~id?,
        ~className?,
        ~style?,
        (),
      ),
    children,
  );

module TabPane = {
  [@bs.module "antd/lib/tabs"]
  external reactClass: ReasonReact.reactClass = "TabPane";
  [@bs.obj]
  external makeProps:
    (
      ~forceRender: bool=?,
      ~key: string=?,
      ~className: string=?,
      ~tab: ReasonReact.reactElement=?,
      ~style: ReactDOMRe.Style.t=?,
      unit
    ) =>
    _ =
    "";
  let make =
      (~forceRender=?, ~key=?, ~tab=?, ~className=?, ~style=?, children) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=makeProps(~forceRender?, ~key?, ~tab?, ~className?, ~style?, ()),
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
          "tab": option('tab),
          "key": option('key),
          "forceRender": option('forceRender),
          "children": 'children,
        },
      ) =>
      make(
        ~style=?reactProps##style,
        ~className=?reactProps##className,
        ~tab=?reactProps##tab,
        ~key=?reactProps##key,
        ~forceRender=?reactProps##forceRender,
        reactProps##children,
      )
    );
  [@bs.obj]
  external makeProps:
    (
      ~children: 'children,
      ~forceRender: 'forceRender=?,
      ~key: 'key=?,
      ~tab: 'tab=?,
      ~className: 'className=?,
      ~style: 'style=?,
      unit
    ) =>
    {
      .
      "style": option('style),
      "className": option('className),
      "tab": option('tab),
      "key": option('key),
      "forceRender": option('forceRender),
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
        "onChange": option('onChange),
        "defaultActiveKey": option('defaultActiveKey),
        "children": 'children,
      },
    ) =>
    make(
      ~style=?reactProps##style,
      ~className=?reactProps##className,
      ~id=?reactProps##id,
      ~onChange=?reactProps##onChange,
      ~defaultActiveKey=?reactProps##defaultActiveKey,
      reactProps##children,
    )
  );
[@bs.obj]
external makeProps:
  (
    ~children: 'children,
    ~defaultActiveKey: 'defaultActiveKey=?,
    ~onChange: 'onChange=?,
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
    "onChange": option('onChange),
    "defaultActiveKey": option('defaultActiveKey),
    "children": 'children,
  } =
  "";

/*
 activeKey	Current TabPane's key	string	-
 animated	Whether to change tabs with animation. Only works while tabPosition="top"\|"bottom"	boolean | {inkBar:boolean, tabPane:boolean}	true, false when type="card"
 renderTabBar	replace the TabBar	(props: DefaultTabBarProps, DefaultTabBar: React.ReactNode) => React.ReactNode	-
 defaultActiveKey	Initial active TabPane's key, if activeKey is not set.	string	-
 hideAdd	Hide plus icon or not. Only works while type="editable-card"	boolean	false
 size	preset tab bar size	large | default | small	default
 tabBarExtraContent	Extra content in tab bar	React.ReactNode	-
 tabBarGutter	The gap between tabs	number	-
 tabBarStyle	Tab bar style object	object	-
 tabPosition	Position of tabs	top | right | bottom | left	top
 type	Basic style of tabs	line | card | editable-card	line
 onChange	Callback executed when active tab is changed	Function(activeKey) {}	-
 onEdit	Callback executed when tab is added or removed. Only works while type="editable-card"	(targetKey, action): void	-
 onNextClick	Callback executed when next button is clicked	Function	-
 onPrevClick	Callback executed when prev button is clicked	Function	-
 onTabClick	Callback executed when tab is clicked	Function	-
  */

/*
 forceRender	Forced render of content in tabs, not lazy render after clicking on tabs	boolean	false
 key	TabPane's key	string	-
 tab	Show text in TabPane's head	string|ReactNode	-
 */

/*
 <Tabs defaultActiveKey="1" onChange={callback}>
     <TabPane tab="Tab 1" key="1">Content of Tab Pane 1</TabPane>
     <TabPane tab="Tab 2" key="2">Content of Tab Pane 2</TabPane>
     <TabPane tab="Tab 3" key="3">Content of Tab Pane 3</TabPane>
   </Tabs>
 */

/*
 forceRender	Forced render of content in tabs, not lazy render after clicking on tabs	boolean	false
 key	TabPane's key	string	-
 tab	Show text in TabPane's head	string|ReactNode	-
 */
