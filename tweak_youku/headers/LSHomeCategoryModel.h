//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "LSParser.h"

@class NSString;

@interface LSHomeCategoryModel : NSObject <LSParser>
{
    NSString *_category_id;
    NSString *_name;
    NSString *_img_b_url;
    NSString *_img_s_url;
    NSString *_focus_img_b_url;
    NSString *_focus_img_s_url;
    NSString *_img_icon_b_url;
    NSString *_img_icon_s_url;
    NSString *_box_state;
    NSString *_box_style;
}

@property(retain, nonatomic) NSString *box_style; // @synthesize box_style=_box_style;
@property(retain, nonatomic) NSString *box_state; // @synthesize box_state=_box_state;
@property(retain, nonatomic) NSString *img_icon_s_url; // @synthesize img_icon_s_url=_img_icon_s_url;
@property(retain, nonatomic) NSString *img_icon_b_url; // @synthesize img_icon_b_url=_img_icon_b_url;
@property(retain, nonatomic) NSString *focus_img_s_url; // @synthesize focus_img_s_url=_focus_img_s_url;
@property(retain, nonatomic) NSString *focus_img_b_url; // @synthesize focus_img_b_url=_focus_img_b_url;
@property(retain, nonatomic) NSString *img_s_url; // @synthesize img_s_url=_img_s_url;
@property(retain, nonatomic) NSString *img_b_url; // @synthesize img_b_url=_img_b_url;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *category_id; // @synthesize category_id=_category_id;
- (void).cxx_destruct;
- (void)parseObject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

