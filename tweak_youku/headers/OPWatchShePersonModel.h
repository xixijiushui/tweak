//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface OPWatchShePersonModel : NSObject
{
    NSString *_img;
    NSString *_personId;
    NSString *_personName;
}

+ (id)parseItem:(id)arg1;
@property(copy, nonatomic) NSString *personName; // @synthesize personName=_personName;
@property(copy, nonatomic) NSString *personId; // @synthesize personId=_personId;
@property(copy, nonatomic) NSString *img; // @synthesize img=_img;
- (void).cxx_destruct;

@end
