//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CMSAction, NSString;

@interface YKSTLikeModel : NSObject
{
    _Bool _isLike;
    long long _count;
    NSString *_title;
    CMSAction *_action;
}

@property(retain, nonatomic) CMSAction *action; // @synthesize action=_action;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long count; // @synthesize count=_count;
@property(nonatomic) _Bool isLike; // @synthesize isLike=_isLike;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end

