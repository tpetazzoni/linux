#ifndef __MVEBU_GICP_H__
#define __MVEBU_GICP_H__

struct mvebu_gicp;

phys_addr_t mvebu_gicp_setspi_phys_addr(struct mvebu_gicp *gicp);
phys_addr_t mvebu_gicp_clrspi_phys_addr(struct mvebu_gicp *gicp);

#endif /* __MVEBU_GICP_H__ */

