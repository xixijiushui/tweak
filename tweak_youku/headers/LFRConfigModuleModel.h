//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class LFRModuleURLModel, NSString;

@interface LFRConfigModuleModel : NSObject
{
    long long _moduleId;
    NSString *_title;
    long long _type;
    LFRModuleURLModel *_moduleConf;
}

+ (id)modelCustomPropertyMapper;
@property(retain, nonatomic) LFRModuleURLModel *moduleConf; // @synthesize moduleConf=_moduleConf;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long moduleId; // @synthesize moduleId=_moduleId;
- (void).cxx_destruct;

@end
