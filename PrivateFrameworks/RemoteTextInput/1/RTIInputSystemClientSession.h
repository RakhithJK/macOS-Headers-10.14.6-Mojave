//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class RTIDocumentState, RTIDocumentTraits;

@interface RTIInputSystemClientSession : NSObject
{
    RTIDocumentTraits *_documentTraits;
    RTIDocumentState *_documentState;
}

@property(retain, nonatomic) RTIDocumentState *documentState; // @synthesize documentState=_documentState;
@property(retain, nonatomic) RTIDocumentTraits *documentTraits; // @synthesize documentTraits=_documentTraits;
- (void).cxx_destruct;

@end

