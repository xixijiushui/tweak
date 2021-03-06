//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface LFPatronusProduct : NSObject
{
    NSString *_price;
    NSString *_title;
    NSString *_productDescription;
    long long _validTime;
    NSArray *_productTypes;
}

+ (id)productWithPrice:(id)arg1 validTime:(long long)arg2;
@property(retain, nonatomic) NSArray *productTypes; // @synthesize productTypes=_productTypes;
@property(nonatomic) long long validTime; // @synthesize validTime=_validTime;
@property(retain, nonatomic) NSString *productDescription; // @synthesize productDescription=_productDescription;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *price; // @synthesize price=_price;
- (void).cxx_destruct;
- (id)makeupProductTypes;

@end

