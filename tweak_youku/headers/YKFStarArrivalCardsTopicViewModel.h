//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ALMBaseViewModel.h"

@class NSString;

@interface YKFStarArrivalCardsTopicViewModel : ALMBaseViewModel
{
    NSString *_title;
    NSString *_descText;
    NSString *_commentButtonText;
    NSString *_tabTimeStr;
    unsigned long long _status;
}

@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *tabTimeStr; // @synthesize tabTimeStr=_tabTimeStr;
@property(copy, nonatomic) NSString *commentButtonText; // @synthesize commentButtonText=_commentButtonText;
@property(copy, nonatomic) NSString *descText; // @synthesize descText=_descText;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)initWithModel:(id)arg1;

@end

