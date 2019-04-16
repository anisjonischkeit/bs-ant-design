[@bs.module]
external reactClass: ReasonReact.reactClass = "antd/lib/pagination";

[%bs.raw {|require("antd/lib/pagination/style")|}];

[@bs.obj]
external makeProps:
  (
    ~current: int=?,
    ~defaultCurrent: int=?,
    ~defaultPageSize: int=?,
    ~hideOnSinglePage: bool=?,
    ~itemRender: string=?,
    ~pageSize: int=?,
    ~pageSizeOptions: array(string)=?,
    ~showQuickJumper: bool=?,
    ~showSizeChanger: bool=?,
    ~showTotal: string => unit=?,
    ~simple: bool=?,
    ~size: string=?,
    ~total: int=?,
    ~onChange: string => unit=?,
    ~onShowSizeChange: string => unit=?,
    ~id: string=?,
    ~className: string=?,
    ~style: ReactDOMRe.Style.t=?,
    unit
  ) =>
  _ =
  "";

let make =
    (
      ~current=?,
      ~defaultCurrent=?,
      ~defaultPageSize=?,
      ~hideOnSinglePage=?,
      ~itemRender=?,
      ~pageSize=?,
      ~pageSizeOptions=?,
      ~showQuickJumper=?,
      ~showSizeChanger=?,
      ~showTotal=?,
      ~simple=?,
      ~size=?,
      ~total=?,
      ~onChange=?,
      ~onShowSizeChange=?,
      ~id=?,
      ~className=?,
      ~style=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass,
    ~props=
      makeProps(
        ~current?,
        ~defaultCurrent?,
        ~defaultPageSize?,
        ~hideOnSinglePage?,
        ~itemRender?,
        ~pageSize?,
        ~pageSizeOptions=?
          Js.Option.map((. b) => Array.of_list(b), pageSizeOptions),
        ~showQuickJumper?,
        ~showSizeChanger?,
        ~showTotal?,
        ~simple?,
        ~size?,
        ~total?,
        ~onChange?,
        ~onShowSizeChange?,
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
        "onShowSizeChange": option('onShowSizeChange),
        "onChange": option('onChange),
        "total": option('total),
        "size": option('size),
        "simple": option('simple),
        "showTotal": option('showTotal),
        "showSizeChanger": option('showSizeChanger),
        "showQuickJumper": option('showQuickJumper),
        "pageSizeOptions": option('pageSizeOptions),
        "pageSize": option('pageSize),
        "itemRender": option('itemRender),
        "hideOnSinglePage": option('hideOnSinglePage),
        "defaultPageSize": option('defaultPageSize),
        "defaultCurrent": option('defaultCurrent),
        "current": option('current),
        "children": 'children,
      },
    ) =>
    make(
      ~style=?reactProps##style,
      ~className=?reactProps##className,
      ~id=?reactProps##id,
      ~onShowSizeChange=?reactProps##onShowSizeChange,
      ~onChange=?reactProps##onChange,
      ~total=?reactProps##total,
      ~size=?reactProps##size,
      ~simple=?reactProps##simple,
      ~showTotal=?reactProps##showTotal,
      ~showSizeChanger=?reactProps##showSizeChanger,
      ~showQuickJumper=?reactProps##showQuickJumper,
      ~pageSizeOptions=?reactProps##pageSizeOptions,
      ~pageSize=?reactProps##pageSize,
      ~itemRender=?reactProps##itemRender,
      ~hideOnSinglePage=?reactProps##hideOnSinglePage,
      ~defaultPageSize=?reactProps##defaultPageSize,
      ~defaultCurrent=?reactProps##defaultCurrent,
      ~current=?reactProps##current,
      reactProps##children,
    )
  );
[@bs.obj]
external makeProps:
  (
    ~children: 'children,
    ~current: 'current=?,
    ~defaultCurrent: 'defaultCurrent=?,
    ~defaultPageSize: 'defaultPageSize=?,
    ~hideOnSinglePage: 'hideOnSinglePage=?,
    ~itemRender: 'itemRender=?,
    ~pageSize: 'pageSize=?,
    ~pageSizeOptions: 'pageSizeOptions=?,
    ~showQuickJumper: 'showQuickJumper=?,
    ~showSizeChanger: 'showSizeChanger=?,
    ~showTotal: 'showTotal=?,
    ~simple: 'simple=?,
    ~size: 'size=?,
    ~total: 'total=?,
    ~onChange: 'onChange=?,
    ~onShowSizeChange: 'onShowSizeChange=?,
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
    "onShowSizeChange": option('onShowSizeChange),
    "onChange": option('onChange),
    "total": option('total),
    "size": option('size),
    "simple": option('simple),
    "showTotal": option('showTotal),
    "showSizeChanger": option('showSizeChanger),
    "showQuickJumper": option('showQuickJumper),
    "pageSizeOptions": option('pageSizeOptions),
    "pageSize": option('pageSize),
    "itemRender": option('itemRender),
    "hideOnSinglePage": option('hideOnSinglePage),
    "defaultPageSize": option('defaultPageSize),
    "defaultCurrent": option('defaultCurrent),
    "current": option('current),
    "children": 'children,
  } =
  "";
