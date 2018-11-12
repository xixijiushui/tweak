//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSMutableAttributedString.h"

@class NSMutableDictionary, NSString;

@interface ASMutableAttributedStringBuilder : NSMutableAttributedString
{
    _Bool _setRange;
    struct _NSRange _pendingRange;
    NSMutableDictionary *_pendingRangeAttributes;
    NSMutableAttributedString *_attrStr;
    NSString *_initString;
}

- (void).cxx_destruct;
- (void)endEditing;
- (void)beginEditing;
- (id)mutableString;
- (id)string;
- (id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;
- (unsigned long long)length;
- (id)composedAttributedString;
- (void)removeAttribute:(id)arg1 range:(struct _NSRange)arg2;
- (void)setAttributes:(id)arg1 range:(struct _NSRange)arg2;
- (void)setAttributedString:(id)arg1;
- (void)deleteCharactersInRange:(struct _NSRange)arg1;
- (void)appendAttributedString:(id)arg1;
- (void)insertAttributedString:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addAttributes:(id)arg1 range:(struct _NSRange)arg2;
- (void)addAttribute:(id)arg1 value:(id)arg2 range:(struct _NSRange)arg3;
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withAttributedString:(id)arg2;
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2;
- (void)_applyPendingRangeAttributions;
- (id)_pendingRangeAttributes;
- (id)_attributedString;
- (id)initWithAttributedString:(id)arg1;
- (id)initWithString:(id)arg1 attributes:(id)arg2;
- (id)initWithString:(id)arg1;
- (id)init;

@end

