//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFReplyToolNonTextContentWithResultViewModel.h"

@class NSMutableArray, RACCommand;

@interface YKFReplyContentImagesResultViewModel : YKFReplyToolNonTextContentWithResultViewModel
{
    NSMutableArray *_selectedImageAsset;
    RACCommand *_updateImageButtonCommand;
    RACCommand *_routeCommand;
}

@property(retain, nonatomic) RACCommand *routeCommand; // @synthesize routeCommand=_routeCommand;
@property(retain, nonatomic) RACCommand *updateImageButtonCommand; // @synthesize updateImageButtonCommand=_updateImageButtonCommand;
@property(retain, nonatomic) NSMutableArray *selectedImageAsset; // @synthesize selectedImageAsset=_selectedImageAsset;
- (void).cxx_destruct;
- (void)updateWithSnapshot:(id)arg1;
- (id)snapshot;
- (void)contentDidReset;
- (id)init;

@end

