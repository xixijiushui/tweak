//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CMSAction, NSString;

@interface YKSTFeedBackModel : NSObject
{
    _Bool _isSelected;
    NSString *_title;
    NSString *_reason;
    CMSAction *_action;
    NSString *_cmsAppId;
}

+ (id)feedbacksFromArray:(id)arg1;
@property(retain, nonatomic) NSString *cmsAppId; // @synthesize cmsAppId=_cmsAppId;
@property(retain, nonatomic) CMSAction *action; // @synthesize action=_action;
@property(retain, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
- (void).cxx_destruct;

@end

