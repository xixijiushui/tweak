//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface KKDailyShow : NSObject
{
    NSString *_category;
    NSString *_horizontalImg;
    NSString *_reputation;
    NSString *_showId;
    NSString *_showName;
    NSArray *_subCategory;
    NSString *_verticalImg;
}

+ (id)parseJson:(id)arg1;
@property(retain, nonatomic) NSString *verticalImg; // @synthesize verticalImg=_verticalImg;
@property(retain, nonatomic) NSArray *subCategory; // @synthesize subCategory=_subCategory;
@property(retain, nonatomic) NSString *showName; // @synthesize showName=_showName;
@property(retain, nonatomic) NSString *showId; // @synthesize showId=_showId;
@property(retain, nonatomic) NSString *reputation; // @synthesize reputation=_reputation;
@property(retain, nonatomic) NSString *horizontalImg; // @synthesize horizontalImg=_horizontalImg;
@property(retain, nonatomic) NSString *category; // @synthesize category=_category;
- (void).cxx_destruct;
- (id)init;

@end

