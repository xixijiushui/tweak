//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface LFRStatusModel : NSObject
{
    _Bool _isShow;
    _Bool _isKickedOut;
    _Bool _isBanSpeak;
    _Bool _isFansGroupOpened;
    long long _roomType;
    NSString *_kickOutMsg;
}

+ (id)modelCustomPropertyMapper;
@property(nonatomic) _Bool isFansGroupOpened; // @synthesize isFansGroupOpened=_isFansGroupOpened;
@property(retain, nonatomic) NSString *kickOutMsg; // @synthesize kickOutMsg=_kickOutMsg;
@property(nonatomic) long long roomType; // @synthesize roomType=_roomType;
@property(nonatomic) _Bool isBanSpeak; // @synthesize isBanSpeak=_isBanSpeak;
@property(nonatomic) _Bool isKickedOut; // @synthesize isKickedOut=_isKickedOut;
@property(nonatomic) _Bool isShow; // @synthesize isShow=_isShow;
- (void).cxx_destruct;
- (id)description;

@end

