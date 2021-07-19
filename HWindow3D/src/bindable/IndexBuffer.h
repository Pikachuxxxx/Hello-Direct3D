#pragma once

#include "Bindable.h"

class IndexBuffer : public Bindable
{
public:
	IndexBuffer(Graphics& gfx, std::vector<unsigned short>& indices);

	void Bind(Graphics& gfx) override;
	UINT GetCount() const { return count; }
private:
	UINT count;
	Microsoft::WRL::ComPtr<ID3D11Buffer> pIndexBuffer;

};

