[%bs.raw {|require("antd/lib/grid/style")|}];

module Row = {
  [@bs.module]
  external reactClass: ReasonReact.reactClass = "antd/lib/grid/row";
  [@bs.deriving jsConverter]
  type rowType = [ | `flex];
  [@bs.deriving jsConverter]
  type rowAlign = [ | `top | `middle | `bottom];
  [@bs.deriving jsConverter]
  type rowJustify = [
    | `start
    | [@bs.as "end"] `end_
    | `center
    | `spaceAround
    | `spaceBetween
  ];
  type gutterBreakpoints;
  [@bs.obj]
  external makeStringGutterConfig:
    (
      ~xs: string=?,
      ~sm: string=?,
      ~md: string=?,
      ~lg: string=?,
      ~xl: string=?,
      ~xxl: string=?,
      unit
    ) =>
    gutterBreakpoints =
    "";
  let makeGutterBreakpoints = (~xs=?, ~sm=?, ~md=?, ~lg=?, ~xl=?, ~xxl=?, ()) =>
    /* ant design uses strings here even though it makes more sense to be number */
    makeStringGutterConfig(
      ~xs=?xs |> Js.Option.map((. b) => string_of_int(b)),
      ~sm=?sm |> Js.Option.map((. b) => string_of_int(b)),
      ~md=?md |> Js.Option.map((. b) => string_of_int(b)),
      ~lg=?lg |> Js.Option.map((. b) => string_of_int(b)),
      ~xl=?xl |> Js.Option.map((. b) => string_of_int(b)),
      ~xxl=?xxl |> Js.Option.map((. b) => string_of_int(b)),
      (),
    );
  type gutter(_) =
    | SingleGutterInPx(int): gutter(int)
    | ResponsiveBreakpoints(gutterBreakpoints): gutter(gutterBreakpoints);
  let gutterToProp = (type a, gutter: gutter(a)): a =>
    switch (gutter) {
    | SingleGutterInPx(int) => int
    | ResponsiveBreakpoints(complexGutter) => complexGutter
    };
  [@bs.obj]
  external makeProps:
    (
      ~className: string=?,
      ~_type: string=?,
      ~align: string=?,
      ~justify: string=?,
      ~gutter: 'a=?,
      ~style: ReactDOMRe.Style.t=?,
      ~prefixCls: string=?,
      unit
    ) =>
    _ =
    "";
  let make =
      (
        ~className=?,
        ~gutter=?,
        ~_type=?,
        ~align=?,
        ~justify=?,
        ~style=?,
        ~prefixCls=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        makeProps(
          ~className?,
          ~_type=?Js.Option.map((. b) => rowTypeToJs(b), _type),
          ~align=?Js.Option.map((. b) => rowAlignToJs(b), align),
          ~justify=?Js.Option.map((. b) => rowJustifyToJs(b), justify),
          ~gutter=?Js.Option.map((. b) => gutterToProp(b), gutter),
          ~style?,
          ~prefixCls?,
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
          "prefixCls": option('prefixCls),
          "style": option('style),
          "justify": option('justify),
          "align": option('align),
          "_type": option('T_type),
          "gutter": option('gutter),
          "className": option('className),
          "children": 'children,
        },
      ) =>
      make(
        ~prefixCls=?reactProps##prefixCls,
        ~style=?reactProps##style,
        ~justify=?reactProps##justify,
        ~align=?reactProps##align,
        ~_type=?reactProps##_type,
        ~gutter=?reactProps##gutter,
        ~className=?reactProps##className,
        reactProps##children,
      )
    );
  [@bs.obj]
  external makeProps:
    (
      ~children: 'children,
      ~className: 'className=?,
      ~gutter: 'gutter=?,
      ~_type: 'T_type=?,
      ~align: 'align=?,
      ~justify: 'justify=?,
      ~style: 'style=?,
      ~prefixCls: 'prefixCls=?,
      unit
    ) =>
    {
      .
      "prefixCls": option('prefixCls),
      "style": option('style),
      "justify": option('justify),
      "align": option('align),
      "_type": option('T_type),
      "gutter": option('gutter),
      "className": option('className),
      "children": 'children,
    } =
    "";
};

module Col = {
  [@bs.module]
  external reactClass: ReasonReact.reactClass = "antd/lib/grid/col";
  type fullColSize;
  [@bs.obj]
  external makeColSize:
    (
      ~span: int=?,
      ~order: int=?,
      ~offset: int=?,
      ~push: int=?,
      ~pull: int=?,
      unit
    ) =>
    fullColSize =
    "";
  type colSize(_) =
    | SingleColSize(int): colSize(int)
    | FullColSize(fullColSize): colSize(fullColSize);
  let colSizeToProp = (type a, colSize: colSize(a)): a =>
    switch (colSize) {
    | SingleColSize(int) => int
    | FullColSize(fullColSize) => fullColSize
    };

  type props;
  [@bs.obj]
  external makeProps:
    (
      ~className: string=?,
      ~span: int=?,
      ~order: int=?,
      ~offset: int=?,
      ~push: int=?,
      ~pull: int=?,
      ~xs: 'a=?,
      ~sm: 'b=?,
      ~md: 'c=?,
      ~lg: 'd=?,
      ~xl: 'e=?,
      ~xxl: 'f=?,
      ~prefixCls: string=?,
      ~style: ReactDOMRe.Style.t=?,
      unit
    ) =>
    props =
    "";
  let make =
      (
        ~className=?,
        ~span=?,
        ~order=?,
        ~offset=?,
        ~push=?,
        ~pull=?,
        ~xs=?,
        ~sm=?,
        ~md=?,
        ~lg=?,
        ~xl=?,
        ~xxl=?,
        ~prefixCls=?,
        ~style=?,
        children,
      ) =>
    ReasonReact.wrapJsForReason(
      ~reactClass,
      ~props=
        makeProps(
          ~className?,
          ~span?,
          ~order?,
          ~offset?,
          ~push?,
          ~pull?,
          ~xs=?Js.Option.map((. b) => colSizeToProp(b), xs),
          ~sm=?Js.Option.map((. b) => colSizeToProp(b), sm),
          ~md=?Js.Option.map((. b) => colSizeToProp(b), md),
          ~lg=?Js.Option.map((. b) => colSizeToProp(b), lg),
          ~xl=?Js.Option.map((. b) => colSizeToProp(b), xl),
          ~xxl=?Js.Option.map((. b) => colSizeToProp(b), xxl),
          ~prefixCls?,
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
          "prefixCls": option('prefixCls),
          "xxl": option('xxl),
          "xl": option('xl),
          "lg": option('lg),
          "md": option('md),
          "sm": option('sm),
          "xs": option('xs),
          "pull": option('pull),
          "push": option('push),
          "offset": option('offset),
          "order": option('order),
          "span": option('span),
          "className": option('className),
          "children": 'children,
        },
      ) =>
      make(
        ~style=?reactProps##style,
        ~prefixCls=?reactProps##prefixCls,
        ~xxl=?reactProps##xxl,
        ~xl=?reactProps##xl,
        ~lg=?reactProps##lg,
        ~md=?reactProps##md,
        ~sm=?reactProps##sm,
        ~xs=?reactProps##xs,
        ~pull=?reactProps##pull,
        ~push=?reactProps##push,
        ~offset=?reactProps##offset,
        ~order=?reactProps##order,
        ~span=?reactProps##span,
        ~className=?reactProps##className,
        reactProps##children,
      )
    );
  [@bs.obj]
  external makeProps:
    (
      ~children: 'children,
      ~className: 'className=?,
      ~span: 'span=?,
      ~order: 'order=?,
      ~offset: 'offset=?,
      ~push: 'push=?,
      ~pull: 'pull=?,
      ~xs: 'xs=?,
      ~sm: 'sm=?,
      ~md: 'md=?,
      ~lg: 'lg=?,
      ~xl: 'xl=?,
      ~xxl: 'xxl=?,
      ~prefixCls: 'prefixCls=?,
      ~style: 'style=?,
      unit
    ) =>
    {
      .
      "style": option('style),
      "prefixCls": option('prefixCls),
      "xxl": option('xxl),
      "xl": option('xl),
      "lg": option('lg),
      "md": option('md),
      "sm": option('sm),
      "xs": option('xs),
      "pull": option('pull),
      "push": option('push),
      "offset": option('offset),
      "order": option('order),
      "span": option('span),
      "className": option('className),
      "children": 'children,
    } =
    "";
};

let makeGutterBreakpoints = Row.makeGutterBreakpoints;

let makeColSize = Col.makeColSize;
