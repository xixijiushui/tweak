//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFBlockVM.h"

@class NSArray, NSString;

@interface YKFCellVotePreviewBlockVM : YKFBlockVM
{
    _Bool _voted;
    _Bool _finished;
    NSString *_logoImageUrl;
    NSArray *_optionsDesc;
    NSString *_tip;
}

@property(nonatomic) _Bool finished; // @synthesize finished=_finished;
@property(nonatomic) _Bool voted; // @synthesize voted=_voted;
@property(copy, nonatomic) NSString *tip; // @synthesize tip=_tip;
@property(retain, nonatomic) NSArray *optionsDesc; // @synthesize optionsDesc=_optionsDesc;
@property(copy, nonatomic) NSString *logoImageUrl; // @synthesize logoImageUrl=_logoImageUrl;
- (void).cxx_destruct;
- (Class)blockClass;
- (id)init;

@end

