//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <OSAKit/OSAHandlerElement.h>

@class NSString;

@interface OSAEventHandlerElement : OSAHandlerElement
{
    NSString *_eventHandlerName;
}

+ (id)elementWithName:(id)arg1 eventHandlerName:(id)arg2 parameters:(id)arg3;
+ (id)elementWithName:(id)arg1 eventHandlerName:(id)arg2;
- (BOOL)generateIntoText:(id)arg1 indent:(unsigned int)arg2;
- (void)setEventHandlerName:(id)arg1;
- (id)eventHandlerName;
- (void)dealloc;
- (id)initWithName:(id)arg1 eventHandlerName:(id)arg2 parameters:(id)arg3;
- (id)initWithName:(id)arg1 eventHandlerName:(id)arg2;

@end

