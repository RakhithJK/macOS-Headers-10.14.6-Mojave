//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebCore/AVAssetResourceLoaderDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WebCoreAVFLoaderDelegate : NSObject <AVAssetResourceLoaderDelegate>
{
    WeakPtr_db8b46a6 m_player;
    // Error parsing type: {GenericTaskQueue<WebCore::Timer, std::__1::atomic<unsigned int> >="m_weakFactory"{WeakPtrFactory<WebCore::GenericTaskQueue<WebCore::Timer, std::__1::atomic<unsigned int> > >="m_ref"{RefPtr<WTF::WeakReference<WebCore::GenericTaskQueue<WebCore::Timer, std::__1::atomic<unsigned int> > >, WTF::DumbPtrTraits<WTF::WeakReference<WebCore::GenericTaskQueue<WebCore::Timer, std::__1::atomic<unsigned int> > > > >="m_ptr"^{WeakReference<WebCore::GenericTaskQueue<WebCore::Timer, std::__1::atomic<unsigned int> > >}}}"m_dispatcher"{TaskDispatcher<WebCore::Timer>="m_weakFactory"{WeakPtrFactory<WebCore::TaskDispatcher<WebCore::Timer> >="m_ref"{RefPtr<WTF::WeakReference<WebCore::TaskDispatcher<WebCore::Timer> >, WTF::DumbPtrTraits<WTF::WeakReference<WebCore::TaskDispatcher<WebCore::Timer> > > >="m_ptr"^{WeakReference<WebCore::TaskDispatcher<WebCore::Timer> >}}}"m_pendingTasks"{Deque<WTF::Function<void ()>, 0>="m_start"Q"m_end"Q"m_buffer"{VectorBuffer<WTF::Function<void ()>, 0>="m_buffer"^{Function<void ()>}"m_capacity"I"m_size"I}}}"m_pendingTasks"{atomic<unsigned int>="__a_"AI}"m_isClosed"B}, name: m_taskQueue
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)resourceLoader:(id)arg1 didCancelLoadingRequest:(id)arg2;
- (BOOL)resourceLoader:(id)arg1 shouldWaitForResponseToAuthenticationChallenge:(id)arg2;
- (BOOL)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2;
- (id)initWithPlayer:(WeakPtr_db8b46a6 *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

