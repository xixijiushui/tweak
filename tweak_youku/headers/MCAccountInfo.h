//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSONModel.h"

@class NSString;

@interface MCAccountInfo : JSONModel
{
    _Bool _silentSwitch;
    long long _type;
    NSString *_name;
    NSString *_icon;
}

@property(retain, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) _Bool silentSwitch; // @synthesize silentSwitch=_silentSwitch;
- (void).cxx_destruct;

@end

