/* JIS(日本語106/109)配列のWindows/OS向けキー定義
 * OS側が日本語配列設定のとき、見た目通りの記号を出すためのマッピング */
#pragma once

#include <dt-bindings/zmk/keys.h>

#define JP_EXCL   LS(N1)      // !
#define JP_DQT    LS(N2)      // "
#define JP_HASH   LS(N3)      // #
#define JP_DLLR   LS(N4)      // $
#define JP_PRCNT  LS(N5)      // %
#define JP_AMPS   LS(N6)      // &
#define JP_SQT    LS(N7)      // '
#define JP_LPAR   LS(N8)      // (
#define JP_RPAR   LS(N9)      // )
#define JP_MINUS  MINUS       // -
#define JP_EQUAL  LS(MINUS)   // =
#define JP_CARET  EQUAL       // ^
#define JP_TILDE  LS(EQUAL)   // ~
#define JP_YEN    INT3        // ¥ (コード上は\)
#define JP_PIPE   LS(INT3)    // |
#define JP_AT     LBKT        // @
#define JP_GRAVE  LS(LBKT)    // `
#define JP_LBKT   RBKT        // [
#define JP_LBRC   LS(RBKT)    // {
#define JP_RBKT   BSLH        // ]
#define JP_RBRC   LS(BSLH)    // }
#define JP_SEMI   SEMI        // ;
#define JP_PLUS   LS(SEMI)    // +
#define JP_COLON  SQT         // :
#define JP_ASTRK  LS(SQT)     // *
#define JP_BSLH   INT1        // \ (ろキー)
#define JP_UNDER  LS(INT1)    // _
#define JP_ZENHAN GRAVE       // 半角/全角 (IMEトグル)
#define JP_LT     LS(COMMA)   // <
#define JP_GT     LS(DOT)     // >
#define JP_QMARK  LS(SLASH)   // ?
