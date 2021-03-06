//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIView, YKFMWCaptionView, YKFMWPhotoBrowser;

@protocol YKFMWPhotoBrowserDelegate <NSObject>
- (id <YKFMWPhoto>)photoBrowser:(YKFMWPhotoBrowser *)arg1 photoAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfPhotosInPhotoBrowser:(YKFMWPhotoBrowser *)arg1;

@optional
- (void)photoBrowserWillHideControls;
- (void)photoBrowserWillShowControls;
- (void)photoBrowserDidToggleControlsWhenSingleTap;
- (double)heightForToolBarInPhotoBrowser:(YKFMWPhotoBrowser *)arg1 atOrientation:(long long)arg2;
- (UIView *)toolBarInPhotoBrowser:(YKFMWPhotoBrowser *)arg1;
- (double)heightForNavigationViewInPhotoBrowser:(YKFMWPhotoBrowser *)arg1 atOrientation:(long long)arg2;
- (UIView *)navigationViewInPhotoBrowser:(YKFMWPhotoBrowser *)arg1;
- (void)photoBrowserDidFinishModalPresentation:(YKFMWPhotoBrowser *)arg1;
- (void)photoBrowser:(YKFMWPhotoBrowser *)arg1 photoAtIndex:(unsigned long long)arg2 selectedChanged:(_Bool)arg3;
- (_Bool)photoBrowser:(YKFMWPhotoBrowser *)arg1 isPhotoSelectedAtIndex:(unsigned long long)arg2;
- (void)photoBrowser:(YKFMWPhotoBrowser *)arg1 actionButtonPressedForPhotoAtIndex:(unsigned long long)arg2;
- (void)photoBrowser:(YKFMWPhotoBrowser *)arg1 didDisplayPhotoAtIndex:(unsigned long long)arg2;
- (NSString *)photoBrowser:(YKFMWPhotoBrowser *)arg1 titleForPhotoAtIndex:(unsigned long long)arg2;
- (YKFMWCaptionView *)photoBrowser:(YKFMWPhotoBrowser *)arg1 captionViewForPhotoAtIndex:(unsigned long long)arg2;
- (id <YKFMWPhoto>)photoBrowser:(YKFMWPhotoBrowser *)arg1 thumbPhotoAtIndex:(unsigned long long)arg2;
@end

