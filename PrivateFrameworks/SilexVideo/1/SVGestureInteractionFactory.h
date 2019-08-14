//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVGestureInteractionFactory-Protocol.h>

@class NSString;
@protocol SVInteractionContextFactory;

@interface SVGestureInteractionFactory : NSObject <SVGestureInteractionFactory>
{
    id <SVInteractionContextFactory> _interactionContextFactory;
}

@property(readonly, nonatomic) id <SVInteractionContextFactory> interactionContextFactory; // @synthesize interactionContextFactory=_interactionContextFactory;
- (void).cxx_destruct;
- (id)createInteractionWithGestureRecognizer:(id)arg1;
- (id)initWithInteractionContextFactory:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

