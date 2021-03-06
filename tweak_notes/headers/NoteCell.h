//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSArray, NSDate, NSLayoutConstraint, NSString, UIImageView, UILabel, UIView;

@interface NoteCell : UITableViewCell
{
    _Bool _showsChevron;
    NSString *_title;
    NSDate *_date;
    NSArray *_highlightedTerms;
    long long _layoutStyle;
    NSArray *_layoutStyleSpecificConstraints;
    UILabel *_titleLabel;
    UILabel *_dateLabel;
    UIView *_contentGuide;
    UIImageView *_defaultAccessoryView;
    NSLayoutConstraint *_leftMarginConstraint;
    NSLayoutConstraint *_rightMarginConstraint;
    NSLayoutConstraint *_bottomMarginConstraint;
    NSLayoutConstraint *_topMarginConstraint;
    struct UIEdgeInsets _contentInsets;
}

+ (double)heightEstimationForContentSizeCategory:(id)arg1;
+ (long long)layoutStyleForPreferredContentSizeCategory:(id)arg1;
+ (void)setupCachedFontsAndAttributes;
+ (void)clearCachedFontsAndAttributes;
+ (id)dateBaseAttributes;
+ (id)titleBaseAttributes;
+ (id)dateBaseFont;
+ (id)titleBaseFont;
+ (void)contentSizeCategoryChanged:(id)arg1;
+ (void)initialize;
@property(retain, nonatomic) NSLayoutConstraint *topMarginConstraint; // @synthesize topMarginConstraint=_topMarginConstraint;
@property(retain, nonatomic) NSLayoutConstraint *bottomMarginConstraint; // @synthesize bottomMarginConstraint=_bottomMarginConstraint;
@property(retain, nonatomic) NSLayoutConstraint *rightMarginConstraint; // @synthesize rightMarginConstraint=_rightMarginConstraint;
@property(retain, nonatomic) NSLayoutConstraint *leftMarginConstraint; // @synthesize leftMarginConstraint=_leftMarginConstraint;
@property(retain, nonatomic) UIImageView *defaultAccessoryView; // @synthesize defaultAccessoryView=_defaultAccessoryView;
@property(retain, nonatomic) UIView *contentGuide; // @synthesize contentGuide=_contentGuide;
@property(retain, nonatomic) UILabel *dateLabel; // @synthesize dateLabel=_dateLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSArray *layoutStyleSpecificConstraints; // @synthesize layoutStyleSpecificConstraints=_layoutStyleSpecificConstraints;
@property(nonatomic) long long layoutStyle; // @synthesize layoutStyle=_layoutStyle;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(nonatomic) _Bool showsChevron; // @synthesize showsChevron=_showsChevron;
@property(copy, nonatomic) NSArray *highlightedTerms; // @synthesize highlightedTerms=_highlightedTerms;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)contentSizeCategoryChanged:(id)arg1;
- (id)highlightedTitleForTitle:(id)arg1;
- (id)titleHighlightedAttributes;
- (void)updateDate;
- (void)updateTitle;
- (void)updateTextSizeRelatedConstraints;
- (void)updateAccessoryView;
- (double)rightMarginConstant;
- (void)prepareSpecificConstraintsForStyle:(long long)arg1;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

