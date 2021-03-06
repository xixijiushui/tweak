//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, UIColor, UIImage;

@interface SKThemeColorModelSearch : NSObject
{
    UIColor *_button_color;
    UIColor *_item_bg_color;
    UIColor *_item_line_color;
    UIColor *_item_text_color;
    UIColor *_line_color;
    UIColor *_search_bg_color;
    UIColor *_search_color;
    UIImage *_cancel_img;
    UIImage *_search_img;
    NSMutableDictionary *_imageIndexDict;
}

@property(retain, nonatomic) NSMutableDictionary *imageIndexDict; // @synthesize imageIndexDict=_imageIndexDict;
@property(retain, nonatomic) UIImage *search_img; // @synthesize search_img=_search_img;
@property(retain, nonatomic) UIImage *cancel_img; // @synthesize cancel_img=_cancel_img;
@property(retain, nonatomic) UIColor *search_color; // @synthesize search_color=_search_color;
@property(retain, nonatomic) UIColor *search_bg_color; // @synthesize search_bg_color=_search_bg_color;
@property(retain, nonatomic) UIColor *line_color; // @synthesize line_color=_line_color;
@property(retain, nonatomic) UIColor *item_text_color; // @synthesize item_text_color=_item_text_color;
@property(retain, nonatomic) UIColor *item_line_color; // @synthesize item_line_color=_item_line_color;
@property(retain, nonatomic) UIColor *item_bg_color; // @synthesize item_bg_color=_item_bg_color;
@property(retain, nonatomic) UIColor *button_color; // @synthesize button_color=_button_color;
- (void).cxx_destruct;
- (id)initSearchDefaultStyle;

@end

