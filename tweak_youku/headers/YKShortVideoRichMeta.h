//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, YKShortVideoCommentList, YKShortVideoNewsObject;

@interface YKShortVideoRichMeta : NSObject
{
    YKShortVideoNewsObject *_newsObj;
    YKShortVideoCommentList *_commentList;
    NSNumber *_newsStatus;
    NSNumber *_commentStatus;
}

@property(nonatomic) NSNumber *commentStatus; // @synthesize commentStatus=_commentStatus;
@property(nonatomic) NSNumber *newsStatus; // @synthesize newsStatus=_newsStatus;
@property(retain, nonatomic) YKShortVideoCommentList *commentList; // @synthesize commentList=_commentList;
@property(retain, nonatomic) YKShortVideoNewsObject *newsObj; // @synthesize newsObj=_newsObj;
- (void).cxx_destruct;
- (void)appendCommentToUserUnchecked:(id)arg1;
- (_Bool)canComment;

@end
