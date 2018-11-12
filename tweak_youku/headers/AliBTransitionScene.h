//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AliBBgElement, NSArray, NSMutableArray, UIView;

@interface AliBTransitionScene : NSObject
{
    UIView *_fromView;
    UIView *_toView;
    NSMutableArray *_mutElements;
    AliBBgElement *_bgElement;
}

@property(readonly, nonatomic) AliBBgElement *bgElement; // @synthesize bgElement=_bgElement;
@property(retain, nonatomic) NSMutableArray *mutElements; // @synthesize mutElements=_mutElements;
@property(nonatomic) __weak UIView *toView; // @synthesize toView=_toView;
@property(nonatomic) __weak UIView *fromView; // @synthesize fromView=_fromView;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *elements;
@property(readonly, nonatomic, getter=isReady) _Bool ready;
- (id)findElementWithName:(id)arg1;
- (id)initWithElements:(id)arg1;

@end
