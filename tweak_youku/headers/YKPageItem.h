//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIViewController<YKPageDelegate>;

@interface YKPageItem : NSObject
{
    UIViewController<YKPageDelegate> *_page;
    NSString *_identifier;
    long long _index;
}

@property(nonatomic) long long index; // @synthesize index=_index;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) UIViewController<YKPageDelegate> *page; // @synthesize page=_page;
- (void).cxx_destruct;

@end

