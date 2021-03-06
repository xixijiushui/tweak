//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface YTMultiscreenDevice : NSObject
{
    _Bool _isOffline;
    _Bool _isHasIcon;
    _Bool _isSelected;
    _Bool _isGotoAirplayList;
    _Bool _isExitsSameName;
    long long _itemType;
    NSDictionary *_deviceInfo;
    NSString *_name;
    NSString *_type;
    NSString *_uuid;
    NSString *_manufacturer;
    NSString *_model;
}

@property(nonatomic) _Bool isExitsSameName; // @synthesize isExitsSameName=_isExitsSameName;
@property(nonatomic) _Bool isGotoAirplayList; // @synthesize isGotoAirplayList=_isGotoAirplayList;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(nonatomic) _Bool isHasIcon; // @synthesize isHasIcon=_isHasIcon;
@property(nonatomic) _Bool isOffline; // @synthesize isOffline=_isOffline;
@property(copy, nonatomic) NSString *model; // @synthesize model=_model;
@property(copy, nonatomic) NSString *manufacturer; // @synthesize manufacturer=_manufacturer;
@property(copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSDictionary *deviceInfo; // @synthesize deviceInfo=_deviceInfo;
@property(nonatomic) long long itemType; // @synthesize itemType=_itemType;
- (void).cxx_destruct;
- (id)toUTDictionary;
- (_Bool)isDlnaType;
- (_Bool)checkSelected:(id)arg1;
- (id)initWithDeviceInfo:(id)arg1 hasIcon:(_Bool)arg2;
- (id)initWithName:(id)arg1 hasIcon:(_Bool)arg2;

@end

