//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DownloadTaskModel, NSArray, NSIndexPath, UICollectionView, VideoEpisodeContentViewController;

@protocol VideoEpisodeContentViewControllerDelegate <NSObject>
- (void)videoEpisodePreCacheContentViewController:(VideoEpisodeContentViewController *)arg1 didSelectItemAtIndexPath:(NSIndexPath *)arg2;
- (void)videoEpisodeContentViewController:(VideoEpisodeContentViewController *)arg1 didSelectItemAtIndexPath:(NSIndexPath *)arg2;

@optional
- (void)videoEpisodeContentViewControllerCollectionDidScroll:(UICollectionView *)arg1;
- (void)videoEpisodeContentViewControllerForUserSystemDidRemoveFinished;
- (void)videoEpisodeContentViewControllerWillRemoveTaskModels:(NSArray *)arg1;
- (void)videoEpisodeContentViewControllerTaskModelDidFinished:(DownloadTaskModel *)arg1;
- (void)videoEpisodeContentViewControllerdidFinishRefreshFirstPageDownloadState:(VideoEpisodeContentViewController *)arg1;
- (void)videoEpisodeContentViewControllerDidRefreshCardState:(VideoEpisodeContentViewController *)arg1;
- (void)videoEpisodeContentViewControllerdidFinishRefreshDownloadState:(VideoEpisodeContentViewController *)arg1;
@end

