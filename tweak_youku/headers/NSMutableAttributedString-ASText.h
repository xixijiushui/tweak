//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSMutableAttributedString.h"

@class ASTextBorder, ASTextDecoration, ASTextShadow, NSArray, NSNumber, NSParagraphStyle, NSShadow, NSString, UIColor, UIFont;

@interface NSMutableAttributedString (ASText)
+ (id)as_allDiscontinuousAttributeKeys;
- (void)as_removeDiscontinuousAttributesInRange:(struct _NSRange)arg1;
- (void)as_setClearColorToJoinedEmoji;
- (void)as_appendString:(id)arg1;
- (void)as_insertString:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)as_setTextHighlightRange:(struct _NSRange)arg1 color:(id)arg2 backgroundColor:(id)arg3 userInfo:(id)arg4;
- (void)as_setTextHighlightRange:(struct _NSRange)arg1 color:(id)arg2 backgroundColor:(id)arg3 tapAction:(CDUnknownBlockType)arg4;
- (void)as_setTextHighlightRange:(struct _NSRange)arg1 color:(id)arg2 backgroundColor:(id)arg3 userInfo:(id)arg4 tapAction:(CDUnknownBlockType)arg5 longPressAction:(CDUnknownBlockType)arg6;
- (void)as_setTextGlyphTransform:(struct CGAffineTransform)arg1 range:(struct _NSRange)arg2;
- (void)as_setTextBlockBorder:(id)arg1 range:(struct _NSRange)arg2;
- (void)as_setTextHighlight:(id)arg1 range:(struct _NSRange)arg2;
- (void)as_setTextAttachment:(id)arg1 range:(struct _NSRange)arg2;
- (void)as_setTextBackgroundBorder:(id)arg1 range:(struct _NSRange)arg2;
- (void)as_setTextBorder:(id)arg1 range:(struct _NSRange)arg2;
- (void)as_setTextStrikethrough:(id)arg1 range:(struct _NSRange)arg2;
- (void)as_setTextUnderline:(id)arg1 range:(struct _NSRange)arg2;
- (void)as_setTextInnerShadow:(id)arg1 range:(struct _NSRange)arg2;
- (void)as_setTextShadow:(id)arg1 range:(struct _NSRange)arg2;
- (void)as_setTextBinding:(id)arg1 range:(struct _NSRange)arg2;
- (void)as_setTextBackedString:(id)arg1 range:(struct _NSRange)arg2;
- (void)as_setLink:(id)arg1 range:(struct _NSRange)arg2;
- (void)as_setAttachment:(id)arg1 range:(struct _NSRange)arg2;
- (void)as_setRubyAnnotation:(struct __CTRubyAnnotation *)arg1 range:(struct _NSRange)arg2;
- (void)as_setBaselineReferenceInfo:(struct __CFDictionary *)arg1 range:(struct _NSRange)arg2;
- (void)as_setBaselineInfo:(struct __CFDictionary *)arg1 range:(struct _NSRange)arg2;
- (void)as_setBaselineClass:(struct __CFString *)arg1 range:(struct _NSRange)arg2;
- (void)as_setRunDelegate:(struct __CTRunDelegate *)arg1 range:(struct _NSRange)arg2;
- (void)as_setCharacterShape:(id)arg1 range:(struct _NSRange)arg2;
- (void)as_setGlyphInfo:(struct __CTGlyphInfo *)arg1 range:(struct _NSRange)arg2;
- (void)as_setSuperscript:(id)arg1 range:(struct _NSRange)arg2;
- (void)as_setTabStops:(id)arg1 range:(struct _NSRange)arg2;
- (void)as_setDefaultTabInterval:(double)arg1 range:(struct _NSRange)arg2;
- (void)as_setHyphenationFactor:(float)arg1 range:(struct _NSRange)arg2;
- (void)as_setLineHeightMultiple:(double)arg1 range:(struct _NSRange)arg2;
- (void)as_setMaximumLineHeight:(double)arg1 range:(struct _NSRange)arg2;
- (void)as_setMinimumLineHeight:(double)arg1 range:(struct _NSRange)arg2;
- (void)as_setLineBreakMode:(long long)arg1 range:(struct _NSRange)arg2;
- (void)as_setTailIndent:(double)arg1 range:(struct _NSRange)arg2;
- (void)as_setHeadIndent:(double)arg1 range:(struct _NSRange)arg2;
- (void)as_setFirstLineHeadIndent:(double)arg1 range:(struct _NSRange)arg2;
- (void)as_setParagraphSpacingBefore:(double)arg1 range:(struct _NSRange)arg2;
- (void)as_setParagraphSpacing:(double)arg1 range:(struct _NSRange)arg2;
- (void)as_setLineSpacing:(double)arg1 range:(struct _NSRange)arg2;
- (void)as_setBaseWritingDirection:(long long)arg1 range:(struct _NSRange)arg2;
- (void)as_setAlignment:(long long)arg1 range:(struct _NSRange)arg2;
- (void)as_setParagraphStyle:(id)arg1 range:(struct _NSRange)arg2;
- (void)as_setWritingDirection:(id)arg1 range:(struct _NSRange)arg2;
- (void)as_setLanguage:(id)arg1 range:(struct _NSRange)arg2;
- (void)as_setVerticalGlyphForm:(_Bool)arg1 range:(struct _NSRange)arg2;
- (void)as_setBaselineOffset:(id)arg1 range:(struct _NSRange)arg2;
- (void)as_setExpansion:(id)arg1 range:(struct _NSRange)arg2;
- (void)as_setObliqueness:(id)arg1 range:(struct _NSRange)arg2;
- (void)as_setTextEffect:(id)arg1 range:(struct _NSRange)arg2;
- (void)as_setLigature:(id)arg1 range:(struct _NSRange)arg2;
- (void)as_setUnderlineColor:(id)arg1 range:(struct _NSRange)arg2;
- (void)as_setUnderlineStyle:(long long)arg1 range:(struct _NSRange)arg2;
- (void)as_setStrikethroughColor:(id)arg1 range:(struct _NSRange)arg2;
- (void)as_setStrikethroughStyle:(long long)arg1 range:(struct _NSRange)arg2;
- (void)as_setShadow:(id)arg1 range:(struct _NSRange)arg2;
- (void)as_setStrokeColor:(id)arg1 range:(struct _NSRange)arg2;
- (void)as_setStrokeWidth:(id)arg1 range:(struct _NSRange)arg2;
- (void)as_setBackgroundColor:(id)arg1 range:(struct _NSRange)arg2;
- (void)as_setColor:(id)arg1 range:(struct _NSRange)arg2;
- (void)as_setKern:(id)arg1 range:(struct _NSRange)arg2;
- (void)as_setFont:(id)arg1 range:(struct _NSRange)arg2;
@property(nonatomic) struct CGAffineTransform as_textGlyphTransform;
@property(retain, nonatomic) ASTextBorder *as_textBackgroundBorder;
@property(retain, nonatomic) ASTextBorder *as_textBorder;
@property(retain, nonatomic) ASTextDecoration *as_textStrikethrough;
@property(retain, nonatomic) ASTextDecoration *as_textUnderline;
@property(retain, nonatomic) ASTextShadow *as_textInnerShadow;
@property(retain, nonatomic) ASTextShadow *as_textShadow;
@property(copy, nonatomic) NSArray *as_tabStops;
@property(nonatomic) double as_defaultTabInterval;
@property(nonatomic) float as_hyphenationFactor;
@property(nonatomic) double as_lineHeightMultiple;
@property(nonatomic) double as_maximumLineHeight;
@property(nonatomic) double as_minimumLineHeight;
@property(nonatomic) long long as_lineBreakMode;
@property(nonatomic) double as_tailIndent;
@property(nonatomic) double as_headIndent;
@property(nonatomic) double as_firstLineHeadIndent;
@property(nonatomic) double as_paragraphSpacingBefore;
@property(nonatomic) double as_paragraphSpacing;
@property(nonatomic) double as_lineSpacing;
@property(nonatomic) long long as_baseWritingDirection;
@property(nonatomic) long long as_alignment;
@property(retain, nonatomic) NSParagraphStyle *as_paragraphStyle;
@property(retain, nonatomic) NSArray *as_writingDirection;
@property(retain, nonatomic) NSString *as_language;
@property(nonatomic) _Bool as_verticalGlyphForm;
@property(retain, nonatomic) NSNumber *as_baselineOffset;
@property(retain, nonatomic) NSNumber *as_expansion;
@property(retain, nonatomic) NSNumber *as_obliqueness;
@property(retain, nonatomic) NSString *as_textEffect;
@property(retain, nonatomic) NSNumber *as_ligature;
@property(retain, nonatomic) UIColor *as_underlineColor;
@property(nonatomic) long long as_underlineStyle;
@property(retain, nonatomic) UIColor *as_strikethroughColor;
@property(nonatomic) long long as_strikethroughStyle;
@property(retain, nonatomic) NSShadow *as_shadow;
@property(retain, nonatomic) UIColor *as_strokeColor;
@property(retain, nonatomic) NSNumber *as_strokeWidth;
@property(retain, nonatomic) UIColor *as_backgroundColor;
@property(retain, nonatomic) UIColor *as_color;
@property(retain, nonatomic) NSNumber *as_kern;
@property(retain, nonatomic) UIFont *as_font;
- (void)as_removeAttributesInRange:(struct _NSRange)arg1;
- (void)as_setAttribute:(id)arg1 value:(id)arg2 range:(struct _NSRange)arg3;
- (void)as_setAttribute:(id)arg1 value:(id)arg2;
- (void)setAs_attributes:(id)arg1;
- (void)as_setAttributes:(id)arg1;
@end
