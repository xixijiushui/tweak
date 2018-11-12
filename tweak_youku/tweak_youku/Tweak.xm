// 直接屏蔽广告
// %hook XAdEnginePreAdModule

// - (void)setupVideoAd {
	
// }

// - (_Bool)needAd {
// 	return NO;
// }

// %end

// 正常打开,加载广告后直接跳过
@interface ZWMethodSet
- (void)skipAdView:(long long)arg1;
@end

%hook XAdEngineVideoAdView

- (void)layoutDescAdLabelView {
	
	[self skipAdView:nil];
}
%end