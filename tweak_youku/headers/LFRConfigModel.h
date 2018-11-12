//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface LFRConfigModel : NSObject
{
    _Bool _userNumSwitch;
    _Bool _roomGiftSwitch;
    _Bool _rankSwitch;
    _Bool _artistsSwitch;
    _Bool _barrageSwitch;
    long long _defaultConf;
    NSString *_headPic;
    NSArray *_modules;
}

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
@property(copy, nonatomic) NSArray *modules; // @synthesize modules=_modules;
@property(copy, nonatomic) NSString *headPic; // @synthesize headPic=_headPic;
@property(nonatomic) _Bool barrageSwitch; // @synthesize barrageSwitch=_barrageSwitch;
@property(nonatomic) _Bool artistsSwitch; // @synthesize artistsSwitch=_artistsSwitch;
@property(nonatomic) _Bool rankSwitch; // @synthesize rankSwitch=_rankSwitch;
@property(nonatomic) _Bool roomGiftSwitch; // @synthesize roomGiftSwitch=_roomGiftSwitch;
@property(nonatomic) _Bool userNumSwitch; // @synthesize userNumSwitch=_userNumSwitch;
@property(nonatomic) long long defaultConf; // @synthesize defaultConf=_defaultConf;
- (void).cxx_destruct;

@end
