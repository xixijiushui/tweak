//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class YKFeedLayoutContent;

@interface YKFeedLayoutManager : NSObject
{
    YKFeedLayoutContent *_content;
}

@property(retain, nonatomic) YKFeedLayoutContent *content; // @synthesize content=_content;
- (void).cxx_destruct;
- (void)reuseCell:(id)arg1;
- (double)rowHeight;
- (id)reuseCellIdentifier;
- (Class)reuseCellClass;
- (long long)rowCount;
- (id)initWithContent:(id)arg1;

@end

