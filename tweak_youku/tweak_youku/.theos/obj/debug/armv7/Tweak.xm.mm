#line 1 "Tweak.xm"




	








@interface ZWMethodSet
- (void)skipAdView:(long long)arg1;
@end


#include <substrate.h>
#if defined(__clang__)
#if __has_feature(objc_arc)
#define _LOGOS_SELF_TYPE_NORMAL __unsafe_unretained
#define _LOGOS_SELF_TYPE_INIT __attribute__((ns_consumed))
#define _LOGOS_SELF_CONST const
#define _LOGOS_RETURN_RETAINED __attribute__((ns_returns_retained))
#else
#define _LOGOS_SELF_TYPE_NORMAL
#define _LOGOS_SELF_TYPE_INIT
#define _LOGOS_SELF_CONST
#define _LOGOS_RETURN_RETAINED
#endif
#else
#define _LOGOS_SELF_TYPE_NORMAL
#define _LOGOS_SELF_TYPE_INIT
#define _LOGOS_SELF_CONST
#define _LOGOS_RETURN_RETAINED
#endif

@class XAdEngineVideoAdView; 
static void (*_logos_orig$_ungrouped$XAdEngineVideoAdView$layoutDescAdLabelView)(_LOGOS_SELF_TYPE_NORMAL XAdEngineVideoAdView* _LOGOS_SELF_CONST, SEL); static void _logos_method$_ungrouped$XAdEngineVideoAdView$layoutDescAdLabelView(_LOGOS_SELF_TYPE_NORMAL XAdEngineVideoAdView* _LOGOS_SELF_CONST, SEL); 

#line 18 "Tweak.xm"


static void _logos_method$_ungrouped$XAdEngineVideoAdView$layoutDescAdLabelView(_LOGOS_SELF_TYPE_NORMAL XAdEngineVideoAdView* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
	
	[self skipAdView:nil];
}

static __attribute__((constructor)) void _logosLocalInit() {
{Class _logos_class$_ungrouped$XAdEngineVideoAdView = objc_getClass("XAdEngineVideoAdView"); MSHookMessageEx(_logos_class$_ungrouped$XAdEngineVideoAdView, @selector(layoutDescAdLabelView), (IMP)&_logos_method$_ungrouped$XAdEngineVideoAdView$layoutDescAdLabelView, (IMP*)&_logos_orig$_ungrouped$XAdEngineVideoAdView$layoutDescAdLabelView);} }
#line 25 "Tweak.xm"
