//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class APBCInformService, NSArray, NSString;

@interface APBCInformOptionViewModel : NSObject
{
    NSArray *_options;
    NSString *_title;
    long long _postID;
    long long _fandomID;
    NSArray *_informReasons;
    APBCInformService *_informService;
}

@property(retain, nonatomic) APBCInformService *informService; // @synthesize informService=_informService;
@property(retain, nonatomic) NSArray *informReasons; // @synthesize informReasons=_informReasons;
@property(nonatomic) long long fandomID; // @synthesize fandomID=_fandomID;
@property(nonatomic) long long postID; // @synthesize postID=_postID;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSArray *options; // @synthesize options=_options;
- (void).cxx_destruct;
- (void)selectOptionAtIndex:(long long)arg1 callback:(CDUnknownBlockType)arg2;
- (void)setupOptionsWith:(id)arg1;
- (id)initWithPostID:(long long)arg1 fandomID:(long long)arg2;

@end

