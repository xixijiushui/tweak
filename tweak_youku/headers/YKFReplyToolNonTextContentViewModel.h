//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ALMBaseViewModel.h"

#import "YKFReplyToolNonTextContentViewModelProtocol.h"

@class RACCommand;

@interface YKFReplyToolNonTextContentViewModel : ALMBaseViewModel <YKFReplyToolNonTextContentViewModelProtocol>
{
    RACCommand *_keepTextOnlyCommand;
}

@property(retain, nonatomic) RACCommand *keepTextOnlyCommand; // @synthesize keepTextOnlyCommand=_keepTextOnlyCommand;
- (void).cxx_destruct;
- (void)updateWithSnapshot:(id)arg1;
- (id)snapshot;
- (id)heightOfCellSignal;
- (double)heightOfCell;
- (void)contentDidReset;

@end
