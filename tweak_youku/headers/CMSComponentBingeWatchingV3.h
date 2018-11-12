//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CMSComponentBingeWatchingV2.h"

@class CMSJsonClient, KSInstance;

@interface CMSComponentBingeWatchingV3 : CMSComponentBingeWatchingV2
{
    struct CGRect _videoFrame;
    KSInstance *_showAllInstance;
    CMSJsonClient *_newJsonClient;
}

@property(retain, nonatomic) CMSJsonClient *newJsonClient; // @synthesize newJsonClient=_newJsonClient;
@property(retain, nonatomic) KSInstance *showAllInstance; // @synthesize showAllInstance=_showAllInstance;
- (void).cxx_destruct;
- (_Bool)isUseHorizontalStyle;
- (id)allCellIndexPath:(id)arg1 frame:(struct CGRect)arg2;
- (void)cardVideoViewNegativeFeedbackView:(id)arg1 feedbackViewFromSource:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)cardVideoViewNegativeFeedbackView:(id)arg1 willShowTriggerBySource:(id)arg2;
- (id)cardVideoViewNegativeFeedbackView:(id)arg1;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)registerCells;
- (struct CGSize)cellSize;
- (_Bool)showAllButton;
- (void)componentCard:(id)arg1 superViewWillAppear:(id)arg2;
- (void)refreshContent:(id)arg1;
- (void)dealloc;
- (id)init;

@end
