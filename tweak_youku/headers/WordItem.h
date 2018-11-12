//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIImage;

@interface WordItem : NSObject
{
    NSString *_word;
    UIImage *_icon;
    struct CGSize _wordSize;
    struct CGRect _itemRect;
}

@property(nonatomic) struct CGSize wordSize; // @synthesize wordSize=_wordSize;
@property(nonatomic) struct CGRect itemRect; // @synthesize itemRect=_itemRect;
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) NSString *word; // @synthesize word=_word;
- (void).cxx_destruct;
- (id)initWithWord:(id)arg1 icon:(id)arg2 font:(id)arg3 textHeight:(double)arg4 padding:(double)arg5 imageSize:(struct CGSize)arg6;
- (id)initWithWord:(id)arg1 font:(id)arg2 textHeight:(double)arg3 padding:(double)arg4;

@end

