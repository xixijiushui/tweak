//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSAttributedString, NSString;

@interface LFBarrageInfoModel : NSObject
{
    _Bool _specialColor;
    _Bool _isSendBySelf;
    _Bool _isHorn;
    _Bool _isSystem;
    float _width;
    NSString *_userID;
    NSAttributedString *_content;
    long long _stauts;
    long long _pos;
    long long _row;
    double _time;
}

@property(nonatomic) double time; // @synthesize time=_time;
@property(nonatomic) float width; // @synthesize width=_width;
@property(nonatomic) long long row; // @synthesize row=_row;
@property(nonatomic) _Bool isSystem; // @synthesize isSystem=_isSystem;
@property(nonatomic) _Bool isHorn; // @synthesize isHorn=_isHorn;
@property(nonatomic) long long pos; // @synthesize pos=_pos;
@property(nonatomic) long long stauts; // @synthesize stauts=_stauts;
@property(copy, nonatomic) NSAttributedString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(nonatomic) _Bool isSendBySelf; // @synthesize isSendBySelf=_isSendBySelf;
@property(nonatomic) _Bool specialColor; // @synthesize specialColor=_specialColor;
- (void).cxx_destruct;

@end

