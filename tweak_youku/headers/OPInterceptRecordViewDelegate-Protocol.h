//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, OPInterceptRecordView, UIButton, UIImage;

@protocol OPInterceptRecordViewDelegate <NSObject>
- (void)didFinishRecord;
- (NSString *)getVideoTitleCaptureImageInInterceptRecordView:(OPInterceptRecordView *)arg1;
- (void)didDismissRecordViewInInterceptRecordView:(OPInterceptRecordView *)arg1;
- (void)didClickScreenshotEdittingButton:(UIButton *)arg1 interceptRecordView:(OPInterceptRecordView *)arg2;

@optional
- (void)recordShareViewExposeStaticsWithPlatformIdStr:(NSString *)arg1 withYKShareSourceId:(int)arg2;
- (void)analyticsShareClicked:(long long)arg1 channel:(NSString *)arg2;
- (NSString *)getLivestreamingVideoUrlCaptureImageInInterceptRecordView:(OPInterceptRecordView *)arg1;
- (void)interceptRecordView:(OPInterceptRecordView *)arg1 interceptRecordType:(long long)arg2 shareButtonType:(long long)arg3 shareName:(NSString *)arg4;
- (void)changeScreenModeForInterceptRecordView:(OPInterceptRecordView *)arg1;
- (void)interceptRecordView:(OPInterceptRecordView *)arg1 saveToSystemWithCaptureImage:(UIImage *)arg2;
- (void)didStartLoopPlayForInterceptRecordView:(OPInterceptRecordView *)arg1;
- (NSString *)getVideoIdCaptureImageInInterceptRecordView:(OPInterceptRecordView *)arg1;
@end

