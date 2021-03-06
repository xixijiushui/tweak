//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSIndexPath;

@interface YKFTableViewBlocksCellVM : NSObject
{
    _Bool _owner;
    _Bool _hiddenSeparatorLine;
    NSIndexPath *_tempIndex;
    struct CGSize _tempSize;
    struct UIEdgeInsets _contentInsets;
}

@property(nonatomic) _Bool hiddenSeparatorLine; // @synthesize hiddenSeparatorLine=_hiddenSeparatorLine;
@property(retain, nonatomic) NSIndexPath *tempIndex; // @synthesize tempIndex=_tempIndex;
@property(nonatomic, getter=isOwner) _Bool owner; // @synthesize owner=_owner;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(nonatomic) struct CGSize tempSize; // @synthesize tempSize=_tempSize;
- (void).cxx_destruct;
- (Class)cellClass;
- (id)init;

@end

