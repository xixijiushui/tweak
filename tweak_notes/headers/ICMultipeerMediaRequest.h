//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ICMultipeerResourceRequest.h"

@class ICMedia;

@interface ICMultipeerMediaRequest : ICMultipeerResourceRequest
{
    ICMedia *_media;
}

@property(retain) ICMedia *media; // @synthesize media=_media;
- (void).cxx_destruct;
- (id)description;
- (void)startRequest;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)note;

@end

